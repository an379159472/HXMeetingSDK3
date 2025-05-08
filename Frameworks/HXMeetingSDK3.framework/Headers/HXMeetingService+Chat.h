//
//  HXMeetingService+Chat.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/20.
//

#import <HXMeetingSDK3/HXMeetingService.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Chat)
#pragma mark 设置聊天权限
- (BOOL)setChatPriviledgeWithChatPriviledge:(HXMeetingChatPriviledge)chatPriviledge;

#pragma mark 获取聊天权限
- (HXMeetingChatPriviledge)getChatPriviledge;

#pragma mark 设置是否允许等待室成员私聊主持人
- (BOOL)setAllowWaitingRoomUserChatToHostWithIsAllow:(BOOL)isAllow;

#pragma mark 获取是否允许等待室成员私聊主持人
- (BOOL)getAllowWaitingRoomUserChatToHost;

#pragma mark 判断该聊天消息是否可以删除
- (BOOL)isChatMessageCanBeDeletedWithMsgId:(NSString *)msgId;

#pragma mark 通过消息ID删除聊天消息
- (BOOL)deleteChatMessageWithMsgId:(NSString *)msgId;

#pragma mark 获取所有聊天消息的ID
- (NSArray<NSString *> *)getAllChatMessageId;

#pragma mark 通过消息ID获取聊天消息
- (nullable HXMeetingChatModel *)getChatMessageWithMsgId:(NSString *)msgId;

#pragma mark 获取聊天消息列表
- (NSArray< HXMeetingChatModel *> *)getChatMsgList;


#pragma mark 发送互动室聊天消息
/*!
@brief 发送互动室聊天消息
 @param content 消息内容
 @param atList at成员数组
@return yes：成功
*/
- (BOOL)sendToMeetingRoomChatMsg:(NSString *)content AtList:(NSArray<NSString *> *)atList;

#pragma mark 发送等待室聊天消息
/*!
@brief 发送等待室聊天消息
 @param content 消息内容
 @param atList at成员数组
@return yes：成功
*/
- (BOOL)sendToWaitingRoomChatMsg:(NSString *)content AtList:(NSArray<NSString *> *)atList;

#pragma mark 发送私密聊天消息
/*!
@brief 发送私密聊天消息
 @param content 消息内容
 @param memUuid 成员id
@return yes：成功
*/
- (BOOL)sendToPrivacyChatMsg:(NSString *)content MemUuid:(NSString *)memUuid;

#pragma mark 发送响应消息
/*!
@brief 发送响应消息
 @param type 消息内容
@return yes：成功
*/
- (BOOL)sendReplyMsg:(HXMeetingReplyType)type;

#pragma mark 设置有消息时播放提示音
/**
  * 设置有消息时播放提示音
  * @brief SetPlaySound
  * @param isOn true 开启 false 关闭
  * @return 成功, false 失败。
  */
- (BOOL)setPlaySound:(BOOL)isOn;

#pragma mark 获取有消息时是否播放提示音
/**
    * 获取有消息时是否播放提示音
    * @brief IsPlaySound
    * @return true 开启 false 关闭
    */
- (BOOL)isPlaySound;


#pragma mark 设置新消息通知
/**
 * 设置新消息通知
 * @brief SetNewMessageNotification
 * @param isOn true 开启 false 关闭
 * @return 成功, false 失败。
 */
- (BOOL)setNewMessageNotification:(BOOL)isOn;

#pragma mark 获取新消息通知是否开启
/**
 * 获取新消息通知是否开启
 * @brief IsNewMessageNotification
 * @return true 开启 false 关闭
 */
- (BOOL)getNewMessageNotification;

#pragma mark 设置新消息通知
/**
 * 设置新聊天消息通知方式
 * @brief SetNewMessageNotificationType
 * @param type 设置新消息通知类型
 * @return yes：成功
 */
- (BOOL)setNewMessageNotificationType:(HXNewMessageNotificationType)type;

#pragma mark 获取新消息通知方式
/**
 * 获取新消息通知方式
 * @brief GetNewMessageNotificationType
 * @return 新消息通知方式
 */
- (HXNewMessageNotificationType)getNewMessageNotificationType;

#pragma mark 获取新消息的数量
/**
 * 获取新消息的数量
 * @brief GetNewMessageNotificationType
 * @return 新消息的数量
 */
- (NSInteger)getNewMessageNumber;

#pragma mark 设置开启/关闭新消息计数
/**
 * 设置开启/关闭新消息计数
 * @brief GetLastTimestamp
 * @param isOn 是否打开
 * @return yes：成功
 */
- (BOOL)setOnNewMessageCount:(BOOL)isOn;

#pragma mark 获取最后一条读取过的聊天信息的时间戳
/**
 * 获取最后一条读取过的聊天信息的时间戳
 * @brief GetLastTimestamp
 * @return 最后一条读取过的聊天信息的时间戳
 */
- (NSInteger)getLastTimestamp;

#pragma mark 调出聊天记录到excel
/**
 * 调出聊天记录到excel
 * @brief GetLastTimestamp
 * @param path 路径
 * @return 返回导出文件全路径+文件名
 */
- (NSString *)exportChat:(NSString *)path;



#pragma mark 设置允许参会人自由聊天
/**
* 设置允许参会人自由聊天
* @brief isEnable  true 开启 false 关闭
* @return yes：成功
*/
- (BOOL)enableFreeChat:(BOOL)isEnable;

#pragma mark 查询是否允许参会人自由聊天
/**
* 查询是否允许参会人自由聊天
* @brief IsFreeChatEnable
* @return true 开启 false 关闭
*/
- (BOOL)isFreeChatEnable;


#pragma mark 查询是否能发送聊天消息
/**
* 查询是否能发送聊天消息
* @brief CanSendMsg
* @param targetUUid 目标UUid 空是发给所有人
* @return 是否可聊天结果
*/
- (HXCanSendChatResult)canSendMsg:(NSString *)targetUUid;

@end

NS_ASSUME_NONNULL_END
