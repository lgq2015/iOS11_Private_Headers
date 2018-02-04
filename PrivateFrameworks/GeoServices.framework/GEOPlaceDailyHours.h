/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDailyHours : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dayOfWeekRange;
    NSArray * _openIntervals;
}

@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } dayOfWeekRange;
@property (readonly) NSArray *openIntervals;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dayOfWeekRange;
- (id)description;
- (id)openIntervals;

@end
