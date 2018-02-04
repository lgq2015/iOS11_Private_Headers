/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGroupPattern : NUPattern {
    struct NSArray { Class x1; } * _group;
}

@property (readonly) NSArray *group;

- (void).cxx_destruct;
- (struct NSArray { Class x1; }*)group;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (bool)isEqualToGroupPattern:(id)arg1;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isFixedOrder;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end
