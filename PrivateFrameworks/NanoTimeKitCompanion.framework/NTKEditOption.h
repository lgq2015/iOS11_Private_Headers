/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditOption : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameForAction;
@property (nonatomic, readonly) long long swatchStyle;

+ (id)optionsDescription;
+ (struct CGSize { double x1; double x2; })sizeForSwatchStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (bool)isValidOption;
- (id)localizedName;
- (id)localizedNameForAction;
- (bool)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;

@end
