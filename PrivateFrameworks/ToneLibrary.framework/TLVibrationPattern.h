/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPattern : NSObject {
    NSMutableArray * _complexPatternDescription;
    id  _contextObject;
    NSDictionary * _propertyListRepresentation;
}

@property (nonatomic, readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property (nonatomic, retain) id contextObject;
@property (nonatomic, readonly) id propertyListRepresentation;

+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (bool)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
+ (id)noneVibrationPattern;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;

- (void).cxx_destruct;
- (id)_artificiallyRepeatingPropertyListRepresentation;
- (double)_computedDuration;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(bool)arg2;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(bool)arg2;
- (id)contextObject;
- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (void)setContextObject:(id)arg1;

@end
