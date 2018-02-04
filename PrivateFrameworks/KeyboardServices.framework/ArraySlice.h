/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface ArraySlice : NSArray {
    NSArray * _array;
    unsigned long long  _count;
    unsigned long long  _offset;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithArray:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
