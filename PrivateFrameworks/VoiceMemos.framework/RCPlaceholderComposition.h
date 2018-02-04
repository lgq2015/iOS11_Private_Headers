/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCPlaceholderComposition : RCComposition {
    RCComposition * _underlyingComposition;
}

@property (nonatomic, readonly) RCComposition *underlyingComposition;

- (void).cxx_destruct;
- (id)initWithUnderlyingComposition:(id)arg1;
- (id)underlyingComposition;

@end
