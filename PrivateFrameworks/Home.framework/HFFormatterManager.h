/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFFormatterManager : NSObject {
    NSFormatter<HFTemperatureFormatter> * _temperatureFormatter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)arcDegreeFormatter;
- (id)booleanFormatter;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)luxFormatter;
- (id)percentFormatter;
- (void)registerTemperatureFormatter:(id)arg1;
- (id)temperatureFormatter;
- (id)timeIntervalFormatter;

@end