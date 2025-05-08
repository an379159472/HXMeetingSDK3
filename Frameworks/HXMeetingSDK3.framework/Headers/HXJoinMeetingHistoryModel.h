//
//  HXJoinMeetingHistoryModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXJoinMeetingHistoryModel
 @brief 加入会议历史模型
 */
@interface HXJoinMeetingHistoryModel : NSObject
/*!
 @brief 会议号
 */
@property (nonatomic, strong) NSString *meetId;

/*!
 @brief 主题
 */
@property (nonatomic, strong) NSString *theme;

@end

NS_ASSUME_NONNULL_END
