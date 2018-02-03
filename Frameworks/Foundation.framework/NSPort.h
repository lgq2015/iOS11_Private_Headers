/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPort : NSObject <NSCoding, NSCopying>

@property (readonly) unsigned long long reservedSpaceLength;
@property (getter=isValid, readonly) bool valid;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;

- (Class)classForCoder;
- (Class)classForPortCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)invalidate;
- (bool)isValid;
- (unsigned int)machPort;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (unsigned long long)reservedSpaceLength;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (void)setDelegate:(id)arg1;

@end