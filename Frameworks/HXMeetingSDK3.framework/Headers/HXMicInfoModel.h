//
//  HXMicInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMicInfoModel : NSObject
/*!
 @brief 麦克风 device Id
 */
@property (nonatomic, strong) NSString *deviceId;

/*!
 @brief 麦克风 device name
 */
@property (nonatomic, strong) NSString *deviceName;

/*!
 @brief 是否选中的设备
 */
@property (nonatomic, assign) BOOL isSelectedDevice;

@end

NS_ASSUME_NONNULL_END
