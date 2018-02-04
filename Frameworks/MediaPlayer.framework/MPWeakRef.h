/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPWeakRef : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
}

+ (id)weakRefWithObject:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
