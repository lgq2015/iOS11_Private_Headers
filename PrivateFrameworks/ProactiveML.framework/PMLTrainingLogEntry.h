/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLTrainingLogEntry : NSObject {
    unsigned long long  _serverIteration;
    double  _timestamp;
}

@property (readonly) unsigned long long serverIteration;
@property (readonly) double timestamp;

- (id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2;
- (unsigned long long)serverIteration;
- (double)timestamp;

@end
