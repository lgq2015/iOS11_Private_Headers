/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelStoreAssetBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int endpointType : 1; 
        unsigned int redownloadParameters : 1; 
        unsigned int redownloadable : 1; 
        unsigned int accountIdentifier : 1; 
        unsigned int shouldReportPlayEvents : 1; 
        unsigned int subscriptionRequired : 1; 
    }  _requestedStoreAssetProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end
