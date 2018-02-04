/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void * _priv;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)lockForReading;
- (bool)lockForReadingBeforeDate:(id)arg1;
- (void)lockForWriting;
- (bool)lockForWritingBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLockForReading;
- (bool)tryLockForWriting;
- (void)unlock;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (void)performReadingBlock:(id /* block */)arg1;
- (void)performWritingBlock:(id /* block */)arg1;

@end
