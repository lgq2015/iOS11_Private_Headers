/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSlice : NSObject {
    unsigned long long  _end;
    unsigned long long  _start;
    struct { 
        unsigned short category; 
        unsigned short subtype; 
    }  _type;
}

@property (nonatomic, readonly) unsigned long long end;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) unsigned long long start;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned short x2; } type;

+ (id)sliceWithType:(struct { unsigned short x1; unsigned short x2; })arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)sliceWithType:(struct { unsigned short x1; unsigned short x2; })arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;

- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)end;
- (id)initWithType:(struct { unsigned short x1; unsigned short x2; })arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithType:(struct { unsigned short x1; unsigned short x2; })arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)start;
- (struct { unsigned short x1; unsigned short x2; })type;

@end
