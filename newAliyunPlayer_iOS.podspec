Pod::Spec.new do |s|
  s.name         = "newAliyunPlayer_iOS"
  s.version      = "1.0.7"
  s.summary      = "newAliyunPlayer_iOS"
  s.description  = <<-DESC
                   It's an SDK for aliyun video vodplay, which implement by Objective-C.
                   DESC
  s.homepage     = "https://github.com/aliyunvideo/newAliyunVodPlayer/"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "aliyunvideo" => "videosdk@service.aliyun.com"}
  s.platform     = :ios
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/aliyunvideo/newAliyunVodPlayer.git", :tag => "#{s.version}" }
  
  s.vendored_framework  = 'AliyunVodPlayerSDK.framework','ffmpeg.framework'
  
  s.requires_arc = true
   

end
