/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding> {
    NSURL * _URL;
    NSString * _actionClass;
    NSArray * _associatedResults;
    NSDictionary * _context;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * _result;
}

@property (retain) NSURL *URL;
@property (retain) NSString *actionClass;
@property (retain) NSArray *associatedResults;
@property (retain) NSDictionary *context;
@property struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*result;

+ (bool)isClassAllowedFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)actionClass;
- (id)associatedResults;
- (id)context;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3 associatedResults:(id)arg4 className:(id)arg5;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)result;
- (void)setActionClass:(id)arg1;
- (void)setAssociatedResults:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (void)setURL:(id)arg1;

@end
