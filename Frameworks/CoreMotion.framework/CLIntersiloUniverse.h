/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {
    CLSilo * _silo;
    CLServiceVendor * _vendor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLSilo *silo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CLServiceVendor *vendor;

+ (id)newIsolatedUniverseWithOnlySilo:(id)arg1;
+ (id)newSharedVendorUniverseWithSilo:(id)arg1;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 silo:(id)arg2 vendor:(id)arg3;
- (id)silo;
- (id)vendor;

@end
