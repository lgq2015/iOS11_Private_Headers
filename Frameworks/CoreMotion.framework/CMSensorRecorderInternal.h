/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSensorRecorderInternal : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fLocationdConnection;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;
- (void)_startWatchdogCheckins;
- (void)_stopWatchdogCheckins;
- (void)dealloc;
- (id)init;
- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;
- (bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;
- (void)teardown;
- (bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;

@end
