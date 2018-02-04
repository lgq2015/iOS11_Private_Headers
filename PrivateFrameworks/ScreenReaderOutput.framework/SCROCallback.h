/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROCallback : NSObject <NSCoding> {
    bool  _isAtomic;
    int  _key;
    id  _object;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;
- (bool)isAtomic;
- (int)key;
- (id)object;
- (void)postToHandler:(id)arg1;
- (void)setIsAtomic:(bool)arg1;

@end
