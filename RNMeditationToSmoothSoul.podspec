
Pod::Spec.new do |s|
  s.name         = "RNMeditationToSmoothSoul"
  s.version      = "1.0.1"
  s.summary      = "RNMeditationToSmoothSoul"
  s.description  = <<-DESC
                  RNMeditationToSmoothSoul
                   DESC
  s.homepage     = "https://github.com/dorislynch/MeditationToSmoothSoul"
                   s.license      = "MIT"
                   # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
                   s.author             = { "author" => "author@domain.cn" }
                   s.platform     = :ios, "7.0"
                   s.source       = { :git => "https://github.com/dorislynch/MeditationToSmoothSoul.git", :tag => "master" }
                   s.source_files  = "ios/**/*.{h,m}"
                   s.requires_arc = true
                 
                 
                   s.dependency "React"
                   s.dependency 'JJException'
  #s.dependency "others"

end

  