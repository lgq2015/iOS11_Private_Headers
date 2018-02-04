/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVendorModelCollection : HMFObject {
    HMDVendorModelEntry * _defaultEntry;
    NSMutableArray * _vendorModelCollection;
}

@property (nonatomic, retain) HMDVendorModelEntry *defaultEntry;
@property (nonatomic, readonly) NSMutableArray *vendorModelCollection;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)defaultEntry;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lookupModel:(id)arg1;
- (void)setDefaultEntry:(id)arg1;
- (id)vendorModelCollection;

@end
