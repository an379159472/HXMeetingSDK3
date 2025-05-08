//
//  HXMeetingService+Audio.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/19.
//

#import <HXMeetingSDK3/HXMeetingService.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Audio)
#pragma mark 入会时音频设备处理流程
- (BOOL)connectAudio;

#pragma mark 离开会议或手动断开音频设备连接时调用
- (BOOL)disconnectAudio;

#pragma mark 将指定成员静音
- (BOOL)muteWithMemUuid:(NSString *)memUuid;

#pragma mark 解除指定成员静音
- (BOOL)unMuteWithMemUuid:(NSString *)memUuid;

#pragma mark 我的麦克风是否静音状态
/**
 * 我的麦克风是否静音状态
 * @brief IsMute
 * @return true 麦克风静音 false 麦克风开启
 */
- (BOOL)isMute;

#pragma mark 关闭扬声器
/**
 * 关闭扬声器
 * @brief MuteSpeaker
 * @return yes 成功
 */
- (BOOL)muteSpeaker;

#pragma mark 我的扬声器是否静音状态
/**
 * 我的扬声器是否静音状态
 * @brief IsMuteSpeaker
 * @return true 扬声器静音 false 扬声器开启
 */
- (BOOL)isMuteSpeaker;

#pragma mark 打开扬声器
 /**
  * @brief UnMuteSpeaker
  * @return yes 成功
  */
- (BOOL)unMuteSpeaker;

#pragma mark 我是否能自我解除静音
- (BOOL)canUnMuteBySelf;

#pragma mark 静音所有人
- (BOOL)muteAllMemberWithIsAllowSelfUnMute:(BOOL)isAllowSelfUnMute;

#pragma mark 解除所有人静音
- (BOOL)unMuteAllMember;

#pragma mark 设置启用/禁用 成员入会时静音
- (BOOL)enableMuteOnEntryWithIsEnable:(BOOL)isEnable;

#pragma mark 设置开麦时播放提示音
/**
 * 设置开麦时播放提示音
 * @brief EnableUnMutePlaySound
 * @param isEnable yes 开启  no  关闭
 * @return yes 成功
 */
- (BOOL)enableUnMutePlaySound:(BOOL)isEnable;

/**
 * 获取成员入会时静音状态
 * @brief IsMuteOnEntryEnable
 * @return true 静音 false 接触静音
 */
- (BOOL)isMuteOnEntryEnable;


#pragma mark 查询开麦时是否播放提示音
/**
 * 查询开麦时是否播放提示音
 * @brief IsUnMutePlaySoundEnable
 * @return yes 开启  no 关闭
 */
- (BOOL)isUnMutePlaySoundEnable;

#pragma mark 同意主持人发起的开启音频请求(会解除静音)
/**
 * 同意主持人发起的开启音频请求(会解除静音)
 * @brief AgreeHostRequestStartAudio
 * @return
 * 客户端收到onHostRequestStartAudio回调,若同意使用AgreeHostRequestStartAudio接口，其他自行关闭会话框即可
 */
- (BOOL)agreeHostRequestStartAudio;

#pragma mark 切换扬声器设备
- (void)switchSpeakerAction;


@end

NS_ASSUME_NONNULL_END
