/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceInfo : NSObject {
    bool  _allowResumingPartialDownload;
    NSArray * _equivalentResources;
    GEOResource * _resource;
}

@property (getter=_allowResumingPartialDownload, setter=_setAllowResumingPartialDownload:, nonatomic) bool allowResumingPartialDownload;
@property (nonatomic, readonly) NSData *checksum;
@property (nonatomic, copy) NSArray *equivalentResources;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOResource *resource;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (bool)_allowResumingPartialDownload;
- (void)_setAllowResumingPartialDownload:(bool)arg1;
- (id)checksum;
- (id)description;
- (id)equivalentResources;
- (id)initWithResource:(id)arg1;
- (id)name;
- (id)resource;
- (void)setEquivalentResources:(id)arg1;
- (int)type;

@end
