/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSString * _sinkID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sinkID;
@property (nonatomic, readonly) int sinkType;
@property (readonly) Class superclass;

+ (id)stringForSinkType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (int)sinkType;

@end
