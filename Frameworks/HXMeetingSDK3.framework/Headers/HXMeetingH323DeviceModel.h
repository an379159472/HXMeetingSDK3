//
//  HXMeetingH323DeviceModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingH323DeviceModel
 @brief 会议H323设备模型
 */
@interface HXMeetingH323DeviceModel : NSObject
/*!
 @brief 设备名称
 */
@property (nonatomic, strong) NSString *name;
/*!
 @brief 设备Ip
 */
@property (nonatomic, strong) NSString *ip;
/*!
 @brief E.164电话号码
 */
@property (nonatomic, strong) NSString *e164Num;
/*!
 @brief 设备类型
 */
@property (nonatomic, assign) HXMeetingH323DeviceType deviceType;
@end

NS_ASSUME_NONNULL_END
