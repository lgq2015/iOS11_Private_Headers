/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDebugAdvertismentSettings : NSObject <SXAdvertisingSettings> {
    unsigned long long  _bannerType;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _distanceFromMedia;
    unsigned long long  _frequency;
    <SXDynamicAdLayout> * _layout;
}

@property (nonatomic, readonly) unsigned long long bannerType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } distanceFromMedia;
@property (nonatomic, readonly) unsigned long long frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXDynamicAdLayout> *layout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)bannerType;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })distanceFromMedia;
- (unsigned long long)frequency;
- (id)initWithFrequency:(unsigned long long)arg1 bannerType:(id)arg2 layout:(id)arg3 distanceFromMedia:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg4;
- (id)layout;

@end
