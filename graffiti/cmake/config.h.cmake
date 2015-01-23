#ifndef CONFIG_H
#define CONFIG_H

/* Enable Debug */
#cmakedefine WITH_DEBUG

/* Host computer name */
#cmakedefine HOSTNAME "@HOSTNAME@"

/* OS Name */
#cmakedefine SYSNAME "@SYSNAME@"

/* Version */
#cmakedefine PROJECT_VERSION "@PROJECT_VERSION@"

/* Version Codename */
#cmakedefine CODENAME "@CODENAME@"

/* Graffiti Copyright string */
#cmakedefine PROJECT_COPYRIGHT "@PROJECT_COPYRIGHT@"

/* Graffiti Contact email */
#cmakedefine PROJECT_CONTACT "@PROJECT_CONTACT@"

/* Graffiti's website */
#cmakedefine ORG_WEBSITE "@ORG_WEBSITE@"

#endif //CONFIG_H
