/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataCategory : NSObject {
    NSString * _categoryDescription;
    NSNumber * _categoryNumber;
    NSString * _categoryType;
}

@property (nonatomic, retain) NSString *categoryDescription;
@property (nonatomic, retain) NSNumber *categoryNumber;
@property (nonatomic, retain) NSString *categoryType;

- (void).cxx_destruct;
- (id)categoryDescription;
- (id)categoryNumber;
- (id)categoryType;
- (void)setCategoryDescription:(id)arg1;
- (void)setCategoryNumber:(id)arg1;
- (void)setCategoryType:(id)arg1;

@end
