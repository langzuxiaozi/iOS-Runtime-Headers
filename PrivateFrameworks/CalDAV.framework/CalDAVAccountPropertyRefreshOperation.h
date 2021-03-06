/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    BOOL  _fetchPrincipalSearchProperties;
}

@property (nonatomic) <CalDAVAccountPropertyRefreshDelegate> *delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (BOOL)fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)refreshProperties;
- (void)setFetchPrincipalSearchProperties:(BOOL)arg1;

@end
