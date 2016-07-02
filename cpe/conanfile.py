from conans import ConanFile

class CpeConan(ConanFile):
	name = "Cpe"
	version = "1.0.0"
	url = "https://github.com/Kashio/cpe.git"
	license = "GPL v3.0"
	author = "Roy Mor (roy.mor173@gmail.com)"
	settings = {"os": ["Windows"], "compiler": None, "arch": None}
	options = {"shared": [True, False]}
	exports = "*"
	
	def conan_info(self):
		self.info.settings.build_type = "Release"
	
	def build(self):
		platform, configuration = self.visual_platform_and_config()
		msbuild = 'Msbuild.exe cpe.sln /m /p:Configuration=%s;Platform="%s"' % (configuration, platform)
		self.output.info(msbuild)
		self.run(msbuild)
	
	def visual_platform_and_config(self):
		platform = "Win32" if self.settings.arch == "x86" else "x64"
		configuration = "Release" if self.options.shared else "ReleaseStatic" 
		return platform, configuration
	
	def package(self):
		self.copy("*.h", dst="include")
		self.copy("*.lib", dst="lib", src="", keep_path=False)
		self.copy("*.dll", dst="bin", src="", keep_path=False)