//
//  HXMeetingService+Participants.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/22.
//

#import <HXMeetingSDK3/HXMeetingService.h>

@class HXMeetingUserInfoModel;
NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Participants)
#pragma mark 获取参会人列表 包含 互动成员、等待室成员等
- (NSArray<HXMeetingUserInfoModel *> *)getParticipantsList:(NSString *)searchText IsSelect:(BOOL)isSelect;

#pragma mark 获取符合渲染条件的成员列表
- (NSArray<HXMeetingUserInfoModel *> *)getRenderingMemberList;

#pragma mark 获取举手成员列表
- (NSArray<HXMeetingUserInfoModel *> *)getHandsUpMemberList:(NSString *)searchText IsSelect:(BOOL)isSelect;

#pragma mark 获取互动成员列表
- (NSArray<HXMeetingUserInfoModel *> *)getInteractMemberList:(NSString *)searchText IsSelect:(BOOL)isSelect;

#pragma mark 获取等待室成员列表
- (NSArray<HXMeetingUserInfoModel *> *)getWaitingMemberList:(NSString *)searchText IsSelect:(BOOL)isSelect;

#pragma mark 获取焦点视频成员列表
- (NSArray<HXMeetingUserInfoModel *> *)getSpotlightMemberList:(NSString *)searchText IsSelect:(BOOL)isSelect;

#pragma mark 通过memUUid获取成员信息
- (nullable HXMeetingUserInfoModel *)getUserWithMemUuid:(NSString *)memUuid;

#pragma mark 获取自身成员信息
- (nullable HXMeetingUserInfoModel *)getMySelfUser;

#pragma mark 获取主持人列表
/**
 * @brief 获取主持人列表
 * @param searchText 用户名收缩关键字 若为空则显示全部
 * @param isHideMe true 不包含我
 * @return 主持人列表
 */
- (NSArray<HXMeetingUserInfoModel *> *)getHostMemberList:(NSString *)searchText IsHideMe:(BOOL)isHideMe;

#pragma mark 获取主讲人列表
/**
 * @brief 获取主讲人列表
 * @param searchText 用户名收缩关键字 若为空则显示全部
 * @param isHideMe true 不包含我
 * @return 主讲人列表
 */
- (NSArray<HXMeetingUserInfoModel *> *)getCoHostMemberList:(NSString *)searchText IsHideMe:(BOOL)isHideMe;

#pragma mark 将互动成员 设置/取消 置顶
/**
 * @brief 将互动成员 设置/取消 置顶
 * @param memUuid 会议成员id
 * @param isTop true 置顶
 * @return 结果
 */
- (BOOL)setTopUpWithMemUuid:(NSString *)memUuid IsTop:(BOOL)isTop;

#pragma mark 将互动成员/置顶互动成员移动到列表中指定的索引位置
/**
 * @brief 将互动成员/置顶互动成员移动到列表中指定的索引位置
 * @param memUuid 会议成员id
 * @param position 位置
 * @param isTop true 置顶
 * @return 结果
 */
- (BOOL)moveInteractToNewPositioningWithMemUuid:(NSString *)memUuid Position:(NSUInteger)position IsTop:(BOOL)isTop;

#pragma mark 全部手放下
/**
 * @brief 全部手放下
 * @return 结果
 */
- (BOOL)lowerAllHands;

#pragma mark 修改屏幕名称
/**
 * @brief 修改屏幕名称
 * @param memUuid 会议成员id
 * @param userName 新的名称
 * @return 结果
 */
- (BOOL)changeUserNameWithMemUuid:(NSString *)memUuid UserName:(NSString *)userName;

#pragma mark 取消指定用户的举手
/**
 * @brief 取消指定用户的举手
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)lowerHandWithMemUuid:(NSString *)memUuid;

#pragma mark 举手
/**
 * @brief 自己举手
 * @param reason 举手原因
 * @return 结果
 */
- (BOOL)raiseHandWithReason:(NSString *)reason;

#pragma mark 参会人是否可以成为主持人
/**
 * @brief 参会人是否可以成为主持人
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)canBeHostWithMemUuid:(NSString *)memUuid;

#pragma mark 将指定的用户设置为主持人
/**
 * @brief 将指定的用户设置为主持人
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)makeHostWithMemUuid:(NSString *)memUuid;

#pragma mark 回收主持人角色
/**
 * @brief 回收主持人角色
 */
- (BOOL)reclaimHost;

#pragma mark 确定用户是否有权收回主持人角色
/**
 * @brief 确定用户是否有权收回主持人角色
 */
- (BOOL)canReclaimHost;

#pragma mark 通过host_key获取主持人
/**
 * @brief 通过key获取主持人
 * @param key 标识
 * @return 结果
 */
- (BOOL)reclaimHostByHostKey:(NSString *)key;

#pragma mark 是否设置了host_key
/**
 * @brief 是否设置了host_key
 */
- (BOOL)hasHostKey;

#pragma mark 确定是否能够将指定的用户角色更改为主讲人
/**
 * @brief 确定是否能够将指定的用户角色更改为主讲人
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)canBeCoHostWithMemUuid:(NSString *)memUuid;

#pragma mark 将指定的用户设置为主讲人
/**
 * @brief 将指定的用户设置为主讲人
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)assignCoHostWithMemUuid:(NSString *)memUuid;

#pragma mark 收回指定用户的主讲人角色
/**
 * @brief 收回指定用户的主讲人角色
 * @param memUuid 会议成员id
 * @return 结果
 */
- (BOOL)revokeCoHostWithMemUuid:(NSString *)memUuid;

#pragma mark 将指定用户移除会议
/**
 * @brief 将指定用户移除会议
 * @param memUuid 会议成员id
 * @param kickoutType 移出类型
 * @return 结果
 */
- (BOOL)expelUserWithMemUuid:(NSString *)memUuid KickoutType:(HXMeetingKickoutType)kickoutType;

#pragma mark 授权参会人自我改名权限
/**
 * @brief 授权参会人自我改名权限
 * @param isAllow yes:允许
 * @return 结果
 */
- (BOOL)allowParticipantsToRenameWithIsAllow:(BOOL)isAllow;

#pragma mark 参会人是否可以修改自身屏幕名称
/**
 * @brief 参会人是否可以修改自身屏幕名称
 * @return 结果
 */
- (BOOL)isParticipantsRenameAllowed;

#pragma mark 设置允许参会人自我解除静音
/**
 * @brief 设置允许参会人自我解除静音
 * @param isAllow yes:允许
 * @return 结果
 */
- (BOOL)allowParticipantsToUnmuteSelfAudioWithIsAllow:(BOOL)isAllow;

#pragma mark 参会人是否可以自我解除静音
/**
 * @brief 参会人是否可以自我解除静音
 * @return 结果
 */
- (BOOL)isParticipantsUnmuteSelfAudioAllowed;

#pragma mark 设置允许参会人自我开启视频
/**
 * @brief 设置允许参会人自我开启视频
 * @param isAllow yes:允许
 * @return 结果
 */
- (BOOL)allowParticipantsToUnmuteSelfVideoWithIsAllow:(BOOL)isAllow;

#pragma mark 参会人是否可以自我开启视频
/**
 * @brief 参会人是否可以自我开启视频
 * @return 结果
 */
- (BOOL)isParticipantsUnmuteSelfVideoAllowed;


#pragma mark 设置允许参会人开启倒计时
/**
 * @brief 设置允许参会人开启倒计时
 * @param isEnable yes 允许
 * @return yes 成功
 */
- (BOOL)allowParticipantsCountdown:(BOOL)isEnable;

#pragma mark 查询是否允许参会人开启倒计时
/**
 * @brief 查询是否允许参会人开启倒计时
 * @return yes 允许
 */
- (BOOL)isAllowParticipantsCountdown;

#pragma mark 设置暂停所有人活动
/**
 * @brief 设置暂停所有人活动
 * @return yes 成功
 */
- (BOOL)setPauseParticipantsActive;

#pragma mark 设置允许自我移除聚焦
/**
 * @brief 设置允许自我移除聚焦
 * @return yes 成功
 */
- (BOOL)allowParticipantsToRemoveSelfSpotlight:(BOOL)isEnable;

#pragma mark 查询是否允许自我移除聚焦
/**
 * @brief 查询是否允许自我移除聚焦
 * @return yes 允许
 */
- (BOOL)isParticipantsToRemoveSelfSpotlightAllowed;

#pragma mark 设置允许参会人举手
/**
 * @brief 设置允许参会人举手
 * @return yes 成功
 */
- (BOOL)allowParticipantsToHandsup:(BOOL)isEnable;

#pragma mark 查询是否允许参会人举手
/**
 * @brief 查询是否允许参会人举手
 * @return yes 允许
 */
- (BOOL)isParticipantsToHandsupAllowed;

#pragma mark 设置是否允许发送回应
/**
 * @brief 设置是否允许发送回应
 * @return yes 成功
 */
- (BOOL)allowParticipantsToSendResponse:(BOOL)isEnable;

#pragma mark 查询是否允许参会人发送回应
/**
 * @brief 查询是否允许参会人发送回应
 * @return yes 允许
 */
- (BOOL)isParticipantsToSendResponseAllowed;

@end

NS_ASSUME_NONNULL_END

