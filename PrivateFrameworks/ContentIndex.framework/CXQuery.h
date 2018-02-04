/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
 */

@interface CXQuery : NSObject {
    struct { int x1; struct __SIJobRef {} *x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; union { struct { struct __MDStoreOIDArray {} *x_1_2_1; struct __MDPlistBytes {} *x_1_2_2; long long x_1_2_3; } x_4_1_1; struct { long long x_2_2_1; } x_4_1_2; struct { struct __MDStoreOIDArray {} *x_3_2_1; struct __MDPlistBytes {} *x_3_2_2; long long x_3_2_3; int x_3_2_4; } x_4_1_3; struct __MDPlistBytes {} *x_4_1_4; struct __MDPlistBytes {} *x_4_1_5; struct { char *x_6_2_1; unsigned long long x_6_2_2; } x_4_1_6; struct { double x_7_2_1; } x_4_1_7; } x4; } * _batch;
    long long  _batchOffset;
    NSArray * _batchValues;
    bool  _canceled;
    bool  _complete;
    CXIndex * _index;
    struct __SIJobRef { } * _job;
    struct __SIResultQueue { } * _resultQueue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    struct __SIQuery { } * _siQuery;
    bool  _started;
    bool  _waiting;
}

@property (nonatomic, readonly) struct { int x1; struct __SIJobRef {} *x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; union { struct { struct __MDStoreOIDArray {} *x_1_2_1; struct __MDPlistBytes {} *x_1_2_2; long long x_1_2_3; } x_4_1_1; struct { long long x_2_2_1; } x_4_1_2; struct { struct __MDStoreOIDArray {} *x_3_2_1; struct __MDPlistBytes {} *x_3_2_2; long long x_3_2_3; int x_3_2_4; } x_4_1_3; struct __MDPlistBytes {} *x_4_1_4; struct __MDPlistBytes {} *x_4_1_5; struct { char *x_6_2_1; unsigned long long x_6_2_2; } x_4_1_6; struct { double x_7_2_1; } x_4_1_7; } x4; }*batch;
@property (nonatomic, readonly) long long batchOffset;
@property (nonatomic, readonly) NSArray *batchValues;
@property (nonatomic, readonly) bool canceled;
@property (nonatomic, readonly) bool complete;
@property (nonatomic, readonly) CXIndex *index;
@property (nonatomic, readonly) struct __SIJobRef { }*job;
@property (nonatomic, readonly) struct __SIResultQueue { }*resultQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, readonly) struct __SIQuery { }*siQuery;
@property (nonatomic, readonly) bool started;
@property (nonatomic, readonly) bool waiting;

+ (void)initialize;

- (struct { int x1; struct __SIJobRef {} *x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; union { struct { struct __MDStoreOIDArray {} *x_1_2_1; struct __MDPlistBytes {} *x_1_2_2; long long x_1_2_3; } x_4_1_1; struct { long long x_2_2_1; } x_4_1_2; struct { struct __MDStoreOIDArray {} *x_3_2_1; struct __MDPlistBytes {} *x_3_2_2; long long x_3_2_3; int x_3_2_4; } x_4_1_3; struct __MDPlistBytes {} *x_4_1_4; struct __MDPlistBytes {} *x_4_1_5; struct { char *x_6_2_1; unsigned long long x_6_2_2; } x_4_1_6; struct { double x_7_2_1; } x_4_1_7; } x4; }*)batch;
- (long long)batchOffset;
- (id)batchValues;
- (void)cancel;
- (bool)canceled;
- (bool)complete;
- (void)dealloc;
- (bool)findDocuments:(unsigned int*)arg1 docNames:(id*)arg2 valueLists:(id*)arg3 maxCount:(unsigned int)arg4 timeOut:(double)arg5 foundCount:(unsigned int*)arg6;
- (unsigned int)getResults:(unsigned int*)arg1 docNames:(id*)arg2 valueLists:(id*)arg3 maxCount:(unsigned int)arg4;
- (id)index;
- (id)initWithSting:(id)arg1 forIndex:(id)arg2 withOptions:(id)arg3;
- (struct __SIJobRef { }*)job;
- (void)processResults:(bool)arg1;
- (struct __SIResultQueue { }*)resultQueue;
- (id)semaphore;
- (struct __SIQuery { }*)siQuery;
- (bool)start;
- (bool)started;
- (bool)waiting;

@end
