//
//  HXMeetingChatModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingChatModel
 @brief 会议聊天模型
 */
@interface HXMeetingChatModel : NSObject
/*!
 @brief 消息ID
 */
@property (nonatomic, strong) NSString *messageId;
/*!
 @brief 发送者成员id
 */
@property (nonatomic, strong) NSString *senderMemUuid;
/*!
 @brief 发送者屏幕名称
 */
@property (nonatomic, strong) NSString *senderDisplayName;
/**
 * @brief 获取发送者头像
 */
@property (nonatomic, strong) NSString * senderAvatar;
/**
 * @brief 获取发送者角色
 */
@property (nonatomic, assign) HXMeetingMemRoleType senderRole;
/**
 * @brief 获取发送者房间类型
 */
@property (nonatomic, assign) HXMeetingMemRoomType senderRoomType;
/**
 * @brief GetSenderClientType
 */
@property (nonatomic, assign) HXMeetingClientDeviceType senderClientType;
/*!
 @brief 接收者成员id
 */
@property (nonatomic, strong) NSString *receiverMemUuid;
/*!
 @brief 接收者屏幕名称
 */
@property (nonatomic, strong) NSString *receiverDisplayName;
/**
 * @brief 获取接收者者角色
 */
@property (nonatomic, assign) HXMeetingMemRoleType receiverRole;
/**
 * @brief 获取接收者房间类型
 */
@property (nonatomic, assign) HXMeetingMemRoomType receiverRoomType;
/*!
 @brief 消息的内容
 */
@property (nonatomic, strong) NSString *content;
/*!
 @brief 消息的时间戳
 */
@property (nonatomic, assign) NSUInteger timeStamp;
/*!
 @brief 是否发送给所有人
 */
@property (nonatomic, assign) BOOL chatToAll;
/**
 * @brief 确定当前消息是否发送到等候室
 */
@property (nonatomic, assign) BOOL isChatToWaitingRoom;
/*!
 @brief 聊天消息类型
 */
@property (nonatomic, assign) HXMeetingChatMessageType chatMessageType;
/*!
 @brief 消息类型
 */
@property (nonatomic, assign) HXMeetingMessageType messageType;
/*!
 @brief 发送给我的消息
 */
@property (nonatomic, assign) BOOL isToMe;
/*!
 @brief 我发送的消息
 */
@property (nonatomic, assign) BOOL isFromMe;
/*!
 @brief 该标识为true，表示本条记录为新消息分割线
 */
@property (nonatomic, assign) BOOL isNewLabel;

/*!
 @brief @我
 */
@property (nonatomic, assign) BOOL isAtMe;

@end

NS_ASSUME_NONNULL_END
