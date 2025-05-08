//
//  HXSpeakerInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/10/15.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXSpeakerInfoModel : NSObject
/*!
 @brief 扬声器 device Id
 */
@property (nonatomic, strong) NSString *deviceId;

/*!
 @brief 扬声器  device name
 */
@property (nonatomic, strong) NSString *deviceName;

/*!
 @brief 是否选中的设备
 */
@property (nonatomic, assign) BOOL isSelectedDevice;


/*!
 @brief 设备类型
 */
@property (nonatomic, strong) NSString *deviceType;

/*!
 @brief 设备类型
 */
@property (nonatomic, assign, readonly) HXMeetingPhoneSpeakerMode mode;
@end

NS_ASSUME_NONNULL_END
