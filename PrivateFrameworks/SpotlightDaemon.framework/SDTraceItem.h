/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDTraceItem : NSObject <NSCopying> {
    NSObject * _data;
    double  _duration;
    long long  _identifier;
    NSString * _label;
    double  _startTime;
    NSString * _string;
}

@property (nonatomic, retain) NSObject *data;
@property (nonatomic) double duration;
@property (nonatomic) long long identifier;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSString *string;

+ (void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3;
+ (id)stringFromReferenceDate:(double)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (double)duration;
- (long long)identifier;
- (id)label;
- (void)setData:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setString:(id)arg1;
- (double)startTime;
- (id)string;

@end
