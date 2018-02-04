/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDStreamDSPConfiguration : NSObject {
    ASDDSPConfiguration * _hardwareDSP;
}

@property (nonatomic, readonly) ASDDSPConfiguration *hardwareDSP;

- (void).cxx_destruct;
- (id)hardwareDSP;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
