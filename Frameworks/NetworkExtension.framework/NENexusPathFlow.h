/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NENexusPathFlow : NENexusFlow {
    NWPath * _path;
}

@property (retain) NWPath *path;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)endpoint;
- (id)initWithPath:(id)arg1;
- (id)parameters;
- (id)path;
- (void)setPath:(id)arg1;

@end
