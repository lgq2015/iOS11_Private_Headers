/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFInputStream : NSInputStream

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (bool)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (bool)_tryRetain;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)close;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end