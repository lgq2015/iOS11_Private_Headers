/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface BitrateLimits : NSObject {
    unsigned long long  defaultValue;
    unsigned long long  defaultValue2G;
    unsigned long long  defaultValueCellular;
    NSArray * limits;
    int  operatingMode;
}

@property (nonatomic, readonly) NSArray *limits;
@property (nonatomic, readonly) int operatingMode;

+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;

- (void)capDefaultValues:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)defaultValueForNetwork:(bool)arg1;
- (id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2;
- (id)limits;
- (int)operatingMode;

@end
