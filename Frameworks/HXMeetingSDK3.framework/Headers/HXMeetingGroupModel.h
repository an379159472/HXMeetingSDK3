//
//  HXMeetingGroupModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

@class HXMeetingUserInfoModel;
NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingGroupModel
 @brief 会议分组模型
 */
@interface HXMeetingGroupModel : NSObject
/*!
 @brief 分组ID
 */
@property (nonatomic, strong) NSString *groupUuid;
/*!
 @brief 分组名称
 */
@property (nonatomic, strong) NSString *groupName;


// 参会人数组
@property (nonatomic, strong) NSMutableArray <HXMeetingUserInfoModel *>*memberArr;

// 是否展开
@property (nonatomic, assign) BOOL isExp;

@end

NS_ASSUME_NONNULL_END
