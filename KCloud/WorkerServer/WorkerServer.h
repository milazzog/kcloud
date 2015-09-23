#ifndef WORKERSERVER_H
#define WORKERSERVER_H

/*
 *
 * GIUSEPPE
 *
 */

#include "workerserver_global.h"

#include "../ResourcesManager/ResourcesManager.h"
#include "../CommandPacket/CommandPacket.h"
#include "../UsersManager/UsersManager.h"
#include "../Console/Console.h"
#include "../Engine/Engine.h"

namespace KCloud{

	class WORKERSERVERSHARED_EXPORT WorkerServer : public Engine{
		Q_OBJECT
		public:
											WorkerServer(int sd, QObject *parent = 0);
											~WorkerServer();
		signals:
						void				consoleOutRequest(QString msg);
		protected:
						void				run();
		public slots:
			virtual		void				parse();
			virtual		void				login();
			virtual		void				logout();
			virtual		void				resourceUp();
			virtual		void				resourceMod();
			virtual		void				resourceDel();
			virtual		void				resourceTree();
			virtual		void				resourceDown();
			virtual		void				userRegister();
			virtual		void				resourcePerm();
			virtual		void				resourceShare();
			virtual		void				passwordChange();
		private:
						void				clog(const QString &log);
						//UsersManager		m_usersManager;
						//ResourcesManager	m_resourcesManager;


	};
}
#endif // WORKERSERVER_H
