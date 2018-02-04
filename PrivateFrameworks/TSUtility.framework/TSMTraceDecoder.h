/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSMTraceDecoder : NSObject

+ (id)decoder;

- (id)stringForBuildInfoTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForCompatibilityTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForKeynoteTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForNumbersTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForPagesTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForRawTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForSystemTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSApplicationTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSCalculationEngineTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSChartsTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSDrawablesTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSKitTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSMeasurementTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSPersistenceTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSTablesTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSTextTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;
- (id)stringForTSUQuickTestTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { long long x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1;

@end
