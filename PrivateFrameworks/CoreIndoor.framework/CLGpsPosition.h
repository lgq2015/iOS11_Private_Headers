/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLGpsPosition : NSObject <NSSecureCoding> {
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    }  _expiry;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
        int referenceFrame; 
        int rawReferenceFrame; 
    }  _gpsLocation;
    struct { 
        double odometer; 
        double deltaDistance; 
        double deltaDistanceAccuracy; 
        double timestampGps; 
        double machtime; 
        float horzUncSemiMaj; 
        float horzUncSemiMin; 
        float horzUncSemiMajAz; 
        bool isFitnessMatch; 
        int matchQuality; 
        struct { 
            double latitude; 
            double longitude; 
        } matchCoordinate; 
        double matchCourse; 
        int matchFormOfWay; 
        int matchRoadClass; 
        bool matchShifted; 
        struct { 
            double value; 
            double std; 
        } pressure; 
        float undulation; 
        struct { 
            double latitude; 
            double longitude; 
        } specialCoordinate; 
        double specialHorizontalAccuracy; 
        double machContinuousTime; 
        int originDevice; 
    }  _gpsLocationPrivate;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{time_point<std::__1::chrono::steady_clock' */ struct  expiry; /* unknown property attribute:  1000000000> >=q}} */
@property (nonatomic) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; } gpsLocation;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; } x16; float x17; struct { double x_18_1_1; double x_18_1_2; } x18; double x19; double x20; int x21; } gpsLocationPrivate;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })expiry;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })gpsLocation;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; } x16; float x17; struct { double x_18_1_1; double x_18_1_2; } x18; double x19; double x20; int x21; })gpsLocationPrivate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; }*)arg1 andPrivateLocation:(const struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; } x16; float x17; struct { double x_18_1_1; double x_18_1_2; } x18; double x19; double x20; int x21; }*)arg2;
- (bool)isStaleFix:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1;
- (void)setGpsLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1;
- (void)setGpsLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; } x16; float x17; struct { double x_18_1_1; double x_18_1_2; } x18; double x19; double x20; int x21; })arg1;

@end
