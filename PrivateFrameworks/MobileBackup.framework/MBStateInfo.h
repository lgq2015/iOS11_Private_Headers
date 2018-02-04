/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBStateInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSError * _error;
    NSMutableArray * _errors;
    unsigned long long  _estimatedTimeRemaining;
    bool  _isBackground;
    bool  _isCloud;
    float  _progress;
    int  _state;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) unsigned long long estimatedTimeRemaining;
@property (nonatomic, readonly) bool isBackground;
@property (nonatomic, readonly) bool isCloud;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) int state;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)errors;
- (unsigned long long)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 error:(id)arg4 errors:(id)arg5;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 isCloud:(bool)arg4 isBackground:(bool)arg5 error:(id)arg6 errors:(id)arg7;
- (bool)isBackground;
- (bool)isCloud;
- (float)progress;
- (void)setBackground:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setEstimatedTimeRemaining:(unsigned long long)arg1;
- (void)setProgress:(float)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
