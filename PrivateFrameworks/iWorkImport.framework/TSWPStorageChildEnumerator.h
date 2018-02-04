/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPStorageChildEnumerator : NSEnumerator {
    NSArray * _charOffsetArray;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _charRange;
    unsigned int  _index;
    TSWPStorage * _storage;
}

- (void)dealloc;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)nextObject;

@end
