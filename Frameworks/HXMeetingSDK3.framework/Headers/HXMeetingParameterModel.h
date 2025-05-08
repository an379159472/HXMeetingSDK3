//
//  HXMeetingParameterModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingParameterModel
 @brief 会议参数
 */
@interface HXMeetingParameterModel : NSObject
/*!
 @brief 会议类型
 */
@property (nonatomic, assign) HXMeetingType meetingType;
/*!
 @brief 入会后是否自动开启本地录制
 */
@property (nonatomic, assign) BOOL isAutoRecordingLocal;
/*!
 @brief 入会后是否自动开启云录制
 */
@property (nonatomic, assign) BOOL isAutoRecordingCloud;
/*!
 @brief 会议唯一ID
 */
@property (nonatomic, strong) NSString *meetingUuid;
/*!
 @brief 会议主题
 */
@property (nonatomic, strong) NSString *meetingTopic;
/*!
 @brief 会议主持人uuid列表
 */
@property (nonatomic, strong) NSArray<NSString *> *meetingHostUUidList;
@end

NS_ASSUME_NONNULL_END
