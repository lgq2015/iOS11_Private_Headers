/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUExportRequest : NURenderRequest {
    NSURL * _destinationURL;
    <NUScalePolicy> * _scalePolicy;
}

@property (copy) NSURL *destinationURL;
@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationURL;
- (id)initWithComposition:(id)arg1;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)scalePolicy;
- (void)setDestinationURL:(id)arg1;
- (void)setScalePolicy:(id)arg1;

@end
