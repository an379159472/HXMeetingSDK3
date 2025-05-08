//
//  HXMeetingGroupOptionModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingGroupOptionModel
 @brief 会议分组选项模型
 */
@interface HXMeetingGroupOptionModel : NSObject
/*!
 @brief 是否参与者可以选择分组讨论室
 */
@property (nonatomic, assign) BOOL canChooseGroup;
/*!
 @brief 是否能返回主会场
 */
@property (nonatomic, assign) BOOL canReturnToMain;
/*!
 @brief 自动分组
 */
@property (nonatomic, assign) BOOL isAutoGrouping;
@end

NS_ASSUME_NONNULL_END
