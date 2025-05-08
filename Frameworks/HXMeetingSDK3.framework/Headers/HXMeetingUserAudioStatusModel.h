//
//  HXMeetingUserAudioStatusModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingParameterModel
 @brief 用户音频状态模型
 */
@interface HXMeetingUserAudioStatusModel : NSObject
/*!
 @brief 用户memUUid
 */
@property (nonatomic, strong) NSString *memUuid;
/*!
 @brief 音频类型
 */
@property (nonatomic, assign) HXMeetingAudioType audioType;
/*!
 @brief 音频状态
 */
@property (nonatomic, assign) HXMeetingAudioStatus audioStatus;
@end

NS_ASSUME_NONNULL_END
