//
//  HXMeetingService+Setting.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/10/14.
//

#import <HXMeetingSDK3/HXMeetingService.h>


@class HXMicInfoModel,HXCameraInfoModel,HXSpeakerInfoModel,HXBeautyParam,HXVirtualBGImageInfo,HXStatisticInfoModel,HXAudioStatisticInfoModel,HXVideoStatisticInfoModel;


NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Setting)
#pragma mark - 通用设置
#pragma mark 设置启用/禁用 双屏模式
/**
 * 设置启用/禁用 双屏模式
 * @brief EnableDualScreenMode
 * @param isEnable true 开启 false 关闭
 * @return true 成功 false 失败
 */
- (BOOL)enableDualScreenMode:(BOOL)isEnable;

#pragma mark 双屏模式 启用/禁用
/**
 * 双屏模式 启用/禁用
 * @brief IsDualScreenModeEnabled
 * @return true 开启 false 关闭
 */
- (BOOL)isDualScreenModeEnabled;

#pragma mark 设置启用/禁用 在加入会议时自动进入全屏模式
/**
 * 设置启用/禁用 在加入会议时自动进入全屏模式
 * @brief EnableAutoFullScreenWhenJoinMeeting
 * @param isEnable true 开启 false 关闭
 * @return true 成功 false 失败
 */
- (BOOL)enableAutoFullScreenWhenJoinMeeting:(BOOL)isEnable;

#pragma mark 在加入会议时自动进入全屏模式 启用/禁用
/**
 * 在加入会议时自动进入全屏模式 启用/禁用
 * @brief IsAutoFullScreenWhenJoinMeetingEnabled
 * @return true 开启
 */
- (BOOL)isAutoFullScreenWhenJoinMeetingEnabled;

#pragma mark 设置启用/禁用 总是显示控制栏
/**
 * 设置启用/禁用 总是显示控制栏
 * @brief EnableAlawysShowControls
 * @param isEnable true 总是显示
 * @return true 成功 false 失败
 */
- (BOOL)enableAlawysShowControls:(BOOL)isEnable;

#pragma mark 总是显示控制栏 启用/禁用
/**
 * 总是显示控制栏 启用/禁用
 * @brief IsAlawysShowControlsEnabled
 * @return true 开启
 */
- (BOOL)isAlawysShowControlsEnabled;

#pragma mark 设置启用/禁用 离开会议时有弹窗提示
/**
 * 设置启用/禁用 离开会议时有弹窗提示
 * @brief EnableReminderWhenExit
 * @return true 成功 false 失败
 */
- (BOOL)enableReminderWhenExit:(BOOL)isEnable;

#pragma mark 离开会议时有弹窗提示 启用/禁用
/**
 * 离开会议时有弹窗提示 启用/禁用
 * @brief IsReminderWhenExitEnabled
 * @return true 开启
 */
- (BOOL)isReminderWhenExitEnabled;

#pragma mark 设置启用/禁用 显示已加会议时长
/**
 * 设置启用/禁用 显示已加会议时长
 * @brief EnableShowElapseTime
 * @return true 成功 false 失败
 */
- (BOOL)enableShowElapseTime:(BOOL)isEnable;

#pragma mark 显示已加会议时长 启用/禁用
/**
 * 显示已加会议时长 启用/禁用
 * @brief IsShowElapseTimeEnabled
 * @return true 开启
 */
- (BOOL)isShowElapseTimeEnabled;

#pragma mark 设置启用/禁用 成员进入时播放声音提示
/**
 * 设置启用/禁用 成员进入时播放声音提示
 * @brief EnableJoinMeetingPlaySound
 * @return true 成功 false 失败
 */
- (BOOL)enableJoinMeetingPlaySound:(BOOL)isEnable;

#pragma mark 成员进入时播放声音提示 启用/禁用
/**
 * 成员进入时播放声音提示 启用/禁用
 * @brief IsJoinMeetingPlaySoundEnabled
 * @return true 开启
 */
- (BOOL)isJoinMeetingPlaySoundEnabled;

#pragma mark 设置启用/禁用 当我的显示器关闭或进入屏幕保护模式时，停止我的视频和语音
/**
 * 设置启用/禁用 当我的显示器关闭或进入屏幕保护模式时，停止我的视频和语音
 * @brief EnableMuteWhenLockScreen
 * @return true 成功 false 失败
 */
- (BOOL)enableMuteWhenLockScreen:(BOOL)isEnable;

#pragma mark 当我的显示器关闭或进入屏幕保护模式时，停止我的视频和语音 启用/禁用
/**
 * 当我的显示器关闭或进入屏幕保护模式时，停止我的视频和语音 启用/禁用
 * @brief IsMuteWhenLockScreenEnabled
 * @return true
 */
- (BOOL)isMuteWhenLockScreenEnabled;

#pragma mark 设置启用/禁用 会议开始前提示
/**
 * 设置启用/禁用 会议开始前提示
 * @brief EnableReminderTimingBeforMeeting
 * @return true 成功 false 失败
 */
- (BOOL)enableReminderTimingBeforMeeting:(BOOL)isEnable;

#pragma mark 会议开始前提示 启用/禁用
/**
 * 会议开始前提示 启用/禁用
 * @brief IsReminderTimingBeforMeetingEnabled
 * @return true 开启
 */
- (BOOL)isReminderTimingBeforMeetingEnabled;

#pragma mark 设置 会议开始前提示时间 单位:分钟
/**
 * 设置 会议开始前提示时间 单位:分钟
 * @brief EnableMeetingReminderMinute
 * @return true 成功 false 失败
 */
- (BOOL)setMeetingReminderMinute:(int)minute;

#pragma mark 获取 会议开始前提示时间 单位:分钟
/**
 * 获取 会议开始前提示时间 单位:分钟
 * @brief GetMeetingReminderMinute
 * @return 时间 单位:分钟
 */
- (int)getMeetingReminderMinute;

#pragma mark 设置外观
/**
 * 设置外观
 * @brief SetClientSkin
 * @param type 外观类型
 * @return true 成功 false 失败
 */
- (BOOL)setClientSkin:(HXClientSkinType)type;

#pragma mark 获取设置的外观
/**
 * 获取设置的外观
 * @brief GetClientSkin
 * @return 外观类型
 */
- (HXClientSkinType)getClientSkin;

#pragma mark 设置客户端主题颜色
/**
 * 设置客户端主题颜色
 * @brief SetClientColorTheme
 * @param colorStr 色值字符串 如rgb:#FFFFFF 或argb:#00FFFFFF
 * @return true 成功 false 失败
 */
- (BOOL)setClientColorTheme:(NSString *)colorStr;


#pragma mark GetClientColorTheme
/**
 * @brief GetClientColorTheme
 * @return 色值字符串 如rgb:#FFFFFF 或argb:#00FFFFFF
 */
- (NSString *)getClientColorTheme;

#pragma mark 设置客户端语言
/**
 * 设置客户端语言
 * @brief SetClientLanguage
 * @param languageStr 语言字符串 如:zh_cn en等自行定义
 * @return true 成功 false 失败
 */
- (BOOL)setClientLanguage:(NSString *)languageStr;


#pragma mark 获取设置的客户端语言
/**
 * 获取设置的客户端语言
 * @brief GetClientLanguage
 * @return 语言字符串 如:zh_cn en等自行定义
 */
- (NSString *)getClientLanguage;

#pragma mark 开启多端入会
/**
 * 开启多端入会
 * @brief EnableMultiClientJoin
 * @param isEnable true开启允许多端入会 false 禁止允许多端入会
 * @return true 成功 false 失败
 */
- (BOOL)enableMultiClientJoin:(BOOL)isEnable;

#pragma mark 查看是否开启了多端入会
/**
 * 查看是否开启了多端入会
 * @brief IsMultiClientJoinEnable
 * @return true 开启
 */
- (BOOL)isMultiClientJoinEnable;

#pragma mark 开启安全驾驶模式
/**
 * 开启安全驾驶模式
 * @brief EnableSafeDrivingMode
 * @param isEnable true 开启
 * @return true 成功 false 失败
 */
- (BOOL)enableSafeDrivingMode:(BOOL)isEnable;

#pragma mark 查看是否开启了安全驾驶模式
/**
 * 查看是否开启了安全驾驶模式
 * @brief IsSafeDrivingModeEnable
 * @return true 开启
 */
- (BOOL)isSafeDrivingModeEnable;

#pragma mark 设置开启有人举手时播放声音提示
/**
 * 设置开启有人举手时播放声音提示
 * @brief EnableRaiseHandPlaySound
 * @param isEnable true 开启
 * @return true 成功 false 失败
 */
- (BOOL)enableRaiseHandPlaySound:(BOOL)isEnable;

#pragma mark 查看有人举手时是否播放声音提示
/**
 * 查看有人举手时是否播放声音提示
 * @brief IsRaiseHandPlaySoundEnabled
 * @return true 播放
 */
- (BOOL)isRaiseHandPlaySoundEnabled;

#pragma mark 网络检测接口
/**
 * 网络检测接口
 * @brief DetectingNetwork
 * @return true
 */
- (BOOL)detectingNetwork;


#pragma mark 开启/关闭聚焦模式
/**
 * 开启/关闭聚焦模式
 * @brief enableFocusMode
 * @return true
 */
- (BOOL)enableFocusMode:(BOOL)isEnable;

#pragma mark 查看聚焦模式 开启/关闭
/**
 * 查看聚焦模式 开启/关闭
 * @brief isFocusModeEnable
 * @return true
 */
- (BOOL)isFocusModeEnable;

#pragma mark 设置美颜算法级别
- (BOOL)setBeautyAlgorithmLevel:(HXBeautyAlgorithmLevel)level;

#pragma mark 获取当前美颜算法级别
- (HXBeautyAlgorithmLevel)getBeautyAlgorithmLevel;

#pragma mark - 语音设置
#pragma mark 获取麦克风信息列表
/**
 * 获取麦克风信息列表
 * @brief GetMicList
 * @return true
 */
- (NSArray<HXMicInfoModel *>*)getMicList;

#pragma mark 选择麦克风设备
/**
 * 选择麦克风设备
 * @brief SelectMic
 * @param deviceId 设备id
 * @param deviceName 设备名称
 * @return true
 */
- (BOOL)selectMicWithDeviceId:(NSString *)deviceId DeviceName:(NSString *)deviceName;



#pragma mark 选择扬声器设备
/**
 * 选择扬声器设备
 * @brief SelectSpeaker
 * @param deviceId 设备id
 * @param deviceName 设备名称
 * @return true
 */
- (BOOL)selectSpeakerWithDeviceId:(NSString *)deviceId DeviceName:(NSString *)deviceName;

#pragma mark 设置启用/禁用 自动调节麦克风音量
/**
 * 设置启用/禁用 自动调节麦克风音量
 * @brief EnableAutoAdjustMic
 * @param isEnable yes 启用
 * @return true
 */
- (BOOL)enableAutoAdjustMic:(BOOL)isEnable;

#pragma mark 获取自动调节麦克风音量 启用/禁用
/**
 * 获取自动调节麦克风音量 启用/禁用
 * @brief IsAutoAdjustMicEnabled
 * @return true
 */
- (BOOL)isAutoAdjustMicEnabled;

#pragma mark 设置所选麦克风的音量
/**
 * 设置所选麦克风的音量
 * @brief SetMicVol
 * @param value 指定麦克风的音量[0-100之间]
 * @return true
 * 如果没有通过SelectMic（）选择麦克风，将启用默认麦克风。
 */
- (BOOL)setMicVol:(int)value;

#pragma mark 获取所选麦克风的音量
/**
 * 获取所选麦克风的音量
 * @brief GetMicVol
 * @return true
 */
- (int)getMicVol;

#pragma mark 设置所选扬声器的音量
/**
 * 设置所选扬声器的音量
 * @brief SetSpeakerVol
 * @param value 指定麦克风的音量[0-100之间]
 * @return true
 * 如果没有通过SelectSpeaker选择扬声器，SDK将启用默认扬声器。
 */
- (BOOL)setSpeakerVol:(int)value;

#pragma mark 获取所选扬声器的音量
/**
 * 获取所选扬声器的音量
 * @brief GetSpeakerVol
 * @return true
 */
- (int)getSpeakerVol;


#pragma mark 设置音频模式与配置
/**
 * 设置音频模式与配置
 * @brief SetAudioModeAndConfigure
 * @param mode 音频模式
 * @return 结果
 */
- (BOOL)setAudioModeAndConfigure:(HXAudioModeAndConfigure)mode;


#pragma mark 获取音频配置与模式
/**
 * 获取音频配置与模式
 * @brief GetAudioModeAndConfigure
 * @return HXAudioModeAndConfigure
 */
- (HXAudioModeAndConfigure)getAudioModeAndConfigure;


#pragma mark 设置会议音频优化模式
/**
 * 设置会议音频优化模式
 * @brief SetSuppressBackgroundNoiseLevel
 * @param level 等级
 * @return true
 */
- (BOOL)setSuppressBackgroundNoiseLevel:(HXSuppressBackgroundNoiseLevel)level;

#pragma mark 获取会议音频优化模式
/**
 * 获取会议音频优化模式
 * @brief GetSuppressBackgroundNoiseLevel
 * @return true
 */
- (HXSuppressBackgroundNoiseLevel)getSuppressBackgroundNoiseLevel;

#pragma mark 设置启用/禁用 HiFi高保真音乐
/**
 * 设置启用/禁用 HiFi高保真音乐
 * @brief EnableHighFidelityMusicMode
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableHighFidelityMusicMode:(BOOL)isEnable;

#pragma mark 获取 HiFi高保真音乐 启用/禁用
/**
 * 获取 HiFi高保真音乐 启用/禁用
 * @brief IsHighFidelityMusicModeEnabled
 * @return true
 */
- (BOOL)isHighFidelityMusicModeEnabled;

#pragma mark 设置启用/禁用 消除回声的标志
/**
 * 设置启用/禁用 消除回声的标志
 * @brief EnableEchoCancellation
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableEchoCancellation:(BOOL)isEnable;

#pragma mark 获取消除回声的标志 启用/禁用
/**
 * 获取消除回声的标志 启用/禁用
 * @brief IsEchoCancellationEnabled
 * @return true
 */
- (BOOL)isEchoCancellationEnabled;


#pragma mark 设置启用/禁用 立体声
/**
 * 设置启用/禁用 立体声
 * @brief EnableStereoAudio
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableStereoAudio:(BOOL)isEnable;

#pragma mark 获取立体声的标志 启用/禁用
/**
 * 获取立体声的标志 启用/禁用
 * @brief IsStereoAudioEnable
 * @return true
 */
- (BOOL)isStereoAudioEnable;

#pragma mark 设置自动调整AGC
/**
 * 设置自动调整AGC
 * @brief EnableAGC
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableAGC:(BOOL)isEnable;

#pragma mark 获取自动调整音量(AGC) 启用/禁用
/**
 * 获取自动调整音量(AGC) 启用/禁用
 * @brief IsAGCEnable
 * @return true
 */
- (BOOL)isAGCEnable;

#pragma mark 设置启用/禁用 加入会议时自动连接电脑语音
/**
 * 设置启用/禁用 加入会议时自动连接电脑语音
 * @brief EnableAutoJoinAudio
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableAutoJoinAudio:(BOOL)isEnable;

#pragma mark 获取加入会议时自动连接电脑语音的标志 启用/禁用
/**
 * 获取加入会议时自动连接电脑语音的标志 启用/禁用
 * @brief IsAutoJoinAudioEnabled
 * @return true
 */
- (BOOL)isAutoJoinAudioEnabled;

#pragma mark 设置启用/禁用 加入会议时麦克风静音
/**
 * 设置启用/禁用 加入会议时麦克风静音
 * @brief EnableAlwaysMuteMicWhenJoinVoip
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableAlwaysMuteMicWhenJoinVoip:(BOOL)isEnable;

#pragma mark 获取加入会议时麦克风静音的标志 启用/禁用
/**
 * 获取加入会议时麦克风静音的标志 启用/禁用
 * @brief IsAlwaysMuteMicWhenJoinVoipEnabled
 * @return true
 */
- (BOOL)isAlwaysMuteMicWhenJoinVoipEnabled;

#pragma mark 设置启用/禁用 使用第三方语音加入会议时不提示连接语音
/**
 * 设置启用/禁用 使用第三方语音加入会议时不提示连接语音
 * @brief EnableSuppressAudioNotify
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableSuppressAudioNotify:(BOOL)isEnable;

#pragma mark 获取使用第三方语音加入会议时不提示连接语音的标志 启用/禁用
/**
 * 获取使用第三方语音加入会议时不提示连接语音的标志 启用/禁用
 * @brief IsSuppressAudioNotifyEnabled
 * @return true
 */
- (BOOL)isSuppressAudioNotifyEnabled;

#pragma mark 设置启用/禁用 可在静音时按住空格键进行通话
/**
 * 设置启用/禁用 可在静音时按住空格键进行通话
 * @brief EnableHoldSpaceKeyToSpeak
 * @param isEnable  yes 启用
 * @return true
 */
- (BOOL)enableHoldSpaceKeyToSpeak:(BOOL)isEnable;

#pragma mark 获取可在静音时按住空格键进行通话的标志 启用/禁用
/**
 * 获取可在静音时按住空格键进行通话的标志 启用/禁用
 * @brief IsHoldSpaceKeyToSpeakEnabled
 * @return true
 */
- (BOOL)isHoldSpaceKeyToSpeakEnabled;



#pragma mark 获取扬声器列表
/**
 * 获取扬声器列表
 * @brief GetSpeakerList
 * @return true
 */
- (NSArray<HXSpeakerInfoModel *>*)getSpeakerList;

#pragma mark 移动端选择扬声器
/**
 * 移动端选择扬声器
 * @brief SelectSpeaker
 * @param mode 扬声器类型
 * @return 结果
 */
- (BOOL)selectSpeaker:(HXMeetingPhoneSpeakerMode)mode;


#pragma mark 判断移动端选择的扬声器
/**
 * 判断移动端选择的扬声器
 * @brief IsSelectSpeaker
 * @param mode 扬声器类型
 * @return true 选中 false 未选中
 * 仅移动端有效
 */
- (BOOL)isSelectSpeaker:(HXMeetingPhoneSpeakerMode)mode;

#pragma mark 移动端获取当前音频设备
- (HXMeetingPhoneSpeakerMode)getCurrentSpeakerMode;


#pragma mark - 视频设置
#pragma mark 获取视频设备列表
/**
 * 获取视频设备列表
 * @brief GetCameraList
 * @return 设备列表
 */
- (NSArray<HXCameraInfoModel *>*)getCameraList;

#pragma mark 选择视频设备
/**
 * 选择视频设备
 * @brief SelectCamera
 * @param deviceId 设备id
 * @return yes 成功
 */
- (BOOL)selectCameraWithDeviceId:(NSString *)deviceId;


#pragma mark 设置启用/禁用始终使用原始大小的视频
/**
 * 设置启用/禁用始终使用原始大小的视频
 * @brief EnableAlwaysUseOriginalSizeVideo
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableAlwaysUseOriginalSizeVideo:(BOOL)isEnable;

#pragma mark 获取始终使用原始大小的视频 启用/禁用
/**
 * 获取始终使用原始大小的视频 启用/禁用
 * @brief IsAlwaysUseOriginalSizeVideo
 * @return yes 启用
 */
- (BOOL)isAlwaysUseOriginalSizeVideo;

#pragma mark 设置启用/禁用高清视频
/**
 * 设置启用/禁用高清视频
 * @brief EnableHDVideo
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableHDVideo:(BOOL)isEnable;

#pragma mark 获取启用/禁用高清视频的标志
/**
 * 获取启用/禁用高清视频的标志
 * @brief IsHDVideoEnabled
 * @return yes 启用
 */
- (BOOL)isHDVideoEnabled;

#pragma mark 设置启用/禁用 视频镜像效果
/**
 * 设置启用/禁用 视频镜像效果
 * @brief EnableVideoMirrorEffect
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableVideoMirrorEffect:(BOOL)isEnable;

#pragma mark 获取视频镜像效果 启用/禁用
/**
 * 获取视频镜像效果 启用/禁用
 * @brief IsVideoMirrorEffectEnabled
 * @return yes 启用
 */
- (BOOL)isVideoMirrorEffectEnabled;

#pragma mark 设置美颜信息
/**
 * 设置美颜信息
 * @brief SetBeauty
 * @param param 美颜值信息
 * @return  yes 成功
 */
- (BOOL)setBeauty:(HXBeautyParam *)param;

#pragma mark 获取美颜值信息
/**
 *获取美颜值信息
 * @brief getBeauty
 * @return 美颜值信息
 */
- (HXBeautyParam *)getBeautyParam;

#pragma mark 设置美颜默认值
/**
 * 设置美颜默认值
 * @return  yes 成功
 */
- (BOOL)setDefaultBeauty;

#pragma mark 设置调整已适应弱光环境
/**
 * 设置调整已适应弱光环境
 * @brief EnableLightAdaption
 * @param isEnable yes 开启
 * @return 结果
 */
- (BOOL)enableLightAdaption:(BOOL)isEnable;

#pragma mark 获取调整以适应弱光环境 启用/禁用
/**
 * 获取调整以适应弱光环境 启用/禁用
 * @brief IsLightAdaptionEnabled
 * @return 结果
 */
- (BOOL)isLightAdaptionEnabled;


#pragma mark 设置启用/禁用 始终在会议中显示参会人屏幕名称
/**
 * 设置启用/禁用 始终在会议中显示参会人屏幕名称
 * @brief EnableAlwaysShowNameOnVideo
 * @param isEnable yes 启用
 * @return  yes 成功
 */
- (BOOL)enableAlwaysShowNameOnVideo:(BOOL)isEnable;

#pragma mark 获取始终在会议中显示参会人屏幕名称 启用/禁用
/**
 * 获取始终在会议中显示参会人屏幕名称 启用/禁用
 * @brief IsAlwaysShowNameOnVideoEnabled
 * @return  yes 启用
 */
- (BOOL)isAlwaysShowNameOnVideoEnabled;

#pragma mark 设置屏幕名称文字大小
/**
 * 设置屏幕名称文字大小
 * @brief SetScreenNameFontSize
 * @param size 大小
 * @return yes 成功
 */
- (BOOL)setScreenNameFontSize:(HXScreenNameFontSize)size;

#pragma mark 获取屏幕名称文字大小
/**
 * 获取屏幕名称文字大小
 * @brief GetScreenNameFontSize
 * @return 文字大小
 */
- (HXScreenNameFontSize)getScreenNameFontSize;

#pragma mark 设置启用/禁用 加入会议时不开启摄像头
/**
 * 设置启用/禁用 加入会议时不开启摄像头
 * @brief EnableAutoTurnOffVideoWhenJoinMeeting
 * @param isEnable yes 启用
 * @return  yes 成功
 */
- (BOOL)enableAutoTurnOffVideoWhenJoinMeeting:(BOOL)isEnable;


#pragma mark 获取加入会议时不开启摄像头 启用/禁用
/**
 * 获取加入会议时不开启摄像头 启用/禁用
 * @brief IsAutoTurnOffVideoWhenJoinMeetingEnabled
 * @return yes 启用
 */
- (BOOL)isAutoTurnOffVideoWhenJoinMeetingEnabled;

#pragma mark 设置启用/禁用 以在加入会议时显示视频预览对话框
/**
 * 设置启用/禁用 以在加入会议时显示视频预览对话框
 * @brief EnableVideoPreviewDialog
 * @param isEnable 是否启用
 * @return 结果
 */
- (BOOL)enableVideoPreviewDialog:(BOOL)isEnable;

#pragma mark 获取用于在加入会议时显示视频预览对话框 启用/禁用
/**
 * 获取用于在加入会议时显示视频预览对话框 启用/禁用
 * @brief IsVideoPreviewDialogEnabled
 * @return 结果
 */
- (BOOL)isVideoPreviewDialogEnabled;

#pragma mark 设置启用/禁用 隐藏非视频参会人
/**
 * 设置启用/禁用 隐藏非视频参会人
 * @brief EnableHideNoVideoUsersOnWallView
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableHideNoVideoUsersOnWallView:(BOOL)isEnable;

#pragma mark 获取隐藏非视频参与者 启用/禁用
/**
 * 获取隐藏非视频参与者 启用/禁用
 * @brief IsHideNoVideoUsersOnWallViewEnabled
 * @return yes 启用
 */
- (BOOL)isHideNoVideoUsersOnWallViewEnabled;

#pragma mark 设置 隐藏自身视图设置
/**
 * 设置 隐藏自身视图设置
 * @brief EnableHideMyVideo
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableHideMyVideo:(BOOL)isEnable;

#pragma mark 查询是否隐藏自身视图
/**
 * 查询是否隐藏自身视图
 * @brief IsHideMyVideoEnable
 * @return yes 启用
 */
- (BOOL)isHideMyVideoEnable;

#pragma mark 设置启用/禁用 发言时将我自己设置为当前演讲人
/**
 * 设置启用/禁用 发言时将我自己设置为当前演讲人
 * @brief EnableSpotlightSelf
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableSpotlightSelf:(BOOL)isEnable;


#pragma mark 获取发言时将我自己设置为当前演讲人 启用/禁用
/**
 * 获取发言时将我自己设置为当前演讲人 启用/禁用
 * @brief IsSpotlightSelfEnabled
 * @return yes 启用
 */
- (BOOL)isSpotlightSelfEnabled;

#pragma mark 设置启用/禁用 通过降噪优化视频质量
/**
 * 设置启用/禁用 通过降噪优化视频质量
 * @brief EnableTemporalDeNoise
 * @param isEnable yes 启用
 * @return yes 成功
 */
- (BOOL)enableTemporalDeNoise:(BOOL)isEnable;

#pragma mark 获取通过降噪优化视频质量 启用/禁用
/**
 * 获取通过降噪优化视频质量 启用/禁用
 * @brief IsTemporalDeNoiseEnabled
 * @return yes 启用
 */
- (BOOL)isTemporalDeNoiseEnabled;

#pragma mark 设置启用/禁用硬件加速
/**
 * 设置启用/禁用硬件加速
 * @brief EnableHardwareEncode
 * @param isEnable yes 启用
 * @param type 开启硬件加速
 * @return yes 成功
 */
- (BOOL)enableHardwareEncode:(BOOL)isEnable Type:(HXVideoHardwareEncodeType)type;

#pragma mark 获取硬件加速 启用/禁用
/**
 * 获取硬件加速 启用/禁用
 * @brief IsHardwareEncodeEnabled
 * @param type 开启硬件加速
 * @return yes 成功
 */
- (BOOL)isHardwareEncodeEnabled:(HXVideoHardwareEncodeType)type;


#pragma mark 设置窄带高清 启用/禁用
- (BOOL)enableLowBitrateHDVideo:(BOOL)isEnable;

#pragma mark 获取窄带高清 启用/禁用
- (BOOL)isLowBitrateHDVideoEnabled;


#pragma mark - 统计设置

#pragma mark 查询整体统计信息

- (HXStatisticInfoModel *)QueryOverallStatisticInfo;

#pragma mark 查询语音统计信息

- (HXAudioStatisticInfoModel *)QueryAudioStatisticInfo;

#pragma mark 查询视频统计信息
- (HXVideoStatisticInfoModel *)QueryVideoStatisticInfo;

#pragma mark 查询共享统计信息
- (HXVideoStatisticInfoModel *)QueryShareStatisticInfo;


#pragma mark - 共享设置
#pragma mark 设置注释权限
- (BOOL)setAnnotationAuth:(HXAnnotationAuth)auth;

#pragma mark 获取注释权限
- (HXAnnotationAuth)getAnnotationAuth;

#pragma mark 设置谁可以解锁注释
- (BOOL)setUnlockAnnotationAuth:(HXUnlockAnnotationAuth)auth;

#pragma mark 获取谁可以解锁注释
- (HXUnlockAnnotationAuth)getUnlockAnnotationAuth;

#pragma mark 设置是否允许成员选择要查看的白板
- (BOOL)enableSelectWb:(BOOL)isEnable;

#pragma mark 查看是否允许成员选择要查看的白板
- (BOOL)isEnableSelectWb;

#pragma mark 设置会中谁能看到共享内容
- (BOOL)setAllCanRecvShare:(BOOL)all;

#pragma mark 查看会中谁可以和看到共享
- (BOOL)isAllCanRecvShare;

@end

NS_ASSUME_NONNULL_END
