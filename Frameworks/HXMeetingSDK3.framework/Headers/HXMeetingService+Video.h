//
//  HXMeetingService+Video.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/20.
//

#import <HXMeetingSDK3/HXMeetingService.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Video)
#pragma mark 关闭用户自己的视频
/**
 * 关闭用户自己的视频
 * @return 结果
 */
- (BOOL)muteVideo;

#pragma mark 打开用户自己的视频
/**
 * 打开用户自己的视频
 * @return 结果
 */
- (BOOL)unMuteVideo;

#pragma mark 用户是否为焦点视频
/**
 * 用户是否为焦点视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)isSpotlightWithMemUuid:(NSString *)memUuid;

#pragma mark 是否有焦点视频
/**
 * 是否有焦点视频
 * @return 结果
 */
- (BOOL)hasSpotlight;


#pragma mark 判断指定用户是否能被设定为焦点用户
/**
 * 判断指定用户是否能被设定为焦点用户
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)canSpotlightWithMemUuid:(NSString *)memUuid;

#pragma mark 判断指定用户是否能被撤销焦点用户
/**
 * 判断指定用户是否能被撤销焦点用户
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)canUnSpotlightWithMemUuid:(NSString *)memUuid;


#pragma mark 设置指定用户为焦点
/**
 * 设置指定用户为焦点
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)spotlightVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 撤销指定用户为焦点视频
/**
 * 撤销指定用户为焦点视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)unSpotlightVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 撤销所有焦点视频
/**
 * 撤销所有焦点视频
 * @return 结果
 */
- (BOOL)unSpotlightAllVideos;

#pragma mark 获取会议中焦点视频的用户列表
/**
 * 获取会议中焦点视频的用户列表
 * @return 会议成员id数组
 */
- (NSArray <NSString *>*)getSpotlightedUserList;


#pragma mark 查询是否能够要求指定用户打开视频
/**
 * 查询是否能够要求指定用户打开视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)canAskAttendeeToStartVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 请求参会人开启视频
/**
 * 请求参会人开启视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)askAttendeeToStartVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 查询是否能够要求指定用户关闭视频
/**
 * 查询是否能够要求指定用户关闭视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)canStopAttendeeVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 将指定用户的视频关闭
/**
 * 将指定用户的视频关闭
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)stopAttendeeVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 锁定视频
/**
 * 锁定视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)lockVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 解锁视频
/**
 * 解锁视频
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)unLockVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 视频锁定状态
/**
 * 视频锁定状态
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)isLockVideoWithMemUuid:(NSString *)memUuid;

#pragma mark 有视频被锁定
/**
 * 有视频被锁定
 * @return 结果
 */
- (BOOL)hasLockVideo;

#pragma mark 撤销全部焦点视频
/**
 * 撤销全部焦点视频
 * @return 结果
 */

- (BOOL)UnLockAllVideos;


#pragma mark 切换视频设备
/**
 * 切换视频设备
 * @param isPreview yes：预览
 * @return 结果
 */
- (BOOL)switchCamera:(BOOL)isPreview;
@end

NS_ASSUME_NONNULL_END
