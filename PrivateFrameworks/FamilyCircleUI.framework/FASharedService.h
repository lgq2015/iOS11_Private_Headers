/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FASharedService : NSObject {
    NSString * _actionURLString;
    NSString * _detailLabel;
    NSString * _displayLabel;
    NSString * _iconURLString;
    NSString * _iconURLStringx2;
    NSString * _iconURLStringx3;
    NSString * _name;
    NSString * _subLabel;
}

@property (nonatomic, readonly) NSString *actionURLString;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *iconURLString;
@property (nonatomic, readonly) NSString *iconURLStringx2;
@property (nonatomic, readonly) NSString *iconURLStringx3;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *subLabel;

- (void).cxx_destruct;
- (id)actionURLString;
- (id)detailLabel;
- (id)displayLabel;
- (id)iconURLString;
- (id)iconURLStringx2;
- (id)iconURLStringx3;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharedService:(id)arg1;
- (id)name;
- (id)subLabel;

@end
